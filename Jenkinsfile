pipeline {
    agent none
    environment {
        TEXT = 'Eusebiu'
    }
    stages {
        stage('Parallel Stages') {
            parallel {
                stage('Uppercase on Development') {
                    agent {
                        label 'Development'
                    }
                    steps {
                            sh 'gcc -o uppercase uppercase.c'
                            sh "./uppercase ${TEXT}"
                        }
                }
                stage('Reverse on Development2') {
                    agent {
                        label 'Development2'
                    }
                    steps {              
                            sh 'gcc -o reverse reverse.c'
                            sh "./reverse ${TEXT}"
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
