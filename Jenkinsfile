pipeline {
    agent none
    environment {
        MY_TEXT = 'example'
    }
    stages {
        stage('Parallel Stages') {
            parallel {
                stage('Uppercase on Development1') {
                    agent {
                        label 'Development'
                    }
                    steps {
                            sh 'gcc -o uppercase uppercase.c'
                            sh "./uppercase ${MY_TEXT}"
                        }
                }
                stage('Reverse on Development2') {
                    agent {
                        label 'Development2'
                    }
                    steps {              
                            sh 'gcc -o reverse reverse.c'
                            sh "./reverse ${MY_TEXT}"
                        }
                }
            }
        }
    }
    post {
        always {
            echo 'This will always run'
        }
        success {
            echo 'This will run only if the pipeline succeeds'
        }
        failure {
            echo 'This will run only if the pipeline fails'
        }
    }
}
